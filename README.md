# tree-sitter-jinja2-sql

A fork of [tree-sitter-jinja2](https://github.com/ArcherHume/tree-sitter-jinja2)
tuned for **highlighting SQL templates with Jinja2** (`*.sql.tmpl`, `*.sql.j2`,
`*.sql.jinja`) in the **Zed** editor (the `db-tools-sql` extension).

## Why a fork

Upstream targets Jinja2-in-HTML: raw text there is a hidden `_text` node that
cannot be captured by query files — while exactly this node is needed to inject
the SQL grammar. On top of that, upstream produces ERROR nodes on real SQL
templates.

## Changes vs upstream (f5c7baa)

1. `raw_text` — a **named** node for raw text, tokenized into words /
   whitespace / symbols: the injection target for SQL in `injections.scm`
   plus keyword-fallback highlighting at the jinja layer.
2. `<` is allowed in raw text — SQL operators `<=`, `<>`, `<=>` no longer
   break the parser.
3. Whitespace-trim dashes: `{%- -%}`, `{{- -}}`, `{#- -#}` (upstream: ERROR).
4. `elif`/`else` as standalone statements, as in real Jinja2.
5. Pipe filters in expressions: `{{ x | sqlsafe }}`, `{{ x | default('y') }}`.
6. Tuples: `f.op in ('IS NULL', 'IS NOT NULL')`.
7. Boolean operators: `a == 'x' and b == 'y'` / `or` (precedence below
   comparisons, python-like).
8. Function-call statements: `{% ref('table') %}` (dbt style).
9. HTML rules and `{% call %}` removed (dead weight for SQL; `call` is
   ambiguous with tuples and never appears in the templates).

## Usage

In a Zed extension's `extension.toml`:

```toml
[grammars.jinja2]
repository = "https://github.com/chelpav/tree-sitter-jinja2-sql"
commit = "<sha>"
```

## Development

```bash
tree-sitter generate --abi 14   # ABI 14 — compatible with older Zed
tree-sitter test                # corpus tests, 57/57
tree-sitter build --wasm        # docker (emscripten/emsdk)
```
