# tree-sitter-jinja2-sql

Форк [tree-sitter-jinja2](https://github.com/ArcherHume/tree-sitter-jinja2),
заточенный под **подсветку SQL-шаблонов с Jinja2** (`*.sql.tmpl`, `*.sql.j2`,
`*.sql.jinja`) в редакторе **Zed** (расширение `db-tools-sql`).

## Зачем форк

Апстрим заточен под Jinja2-в-HTML: сырой текст там скрытая нода `_text`, которую
невозможно захватить в query-файлах — а именно через неё инъектируется SQL-грамматика.
Кроме того, на реальных SQL-шаблонах апстрим сыплет ERROR-нодами.

## Отличия от апстрима (f5c7baa)

1. `raw_text` — именованная нода сырого текста, токенизированная на слова/пробелы/
   символы: цель для SQL-инъекции в `injections.scm` + фолбэк-подсветка ключевых
   слов SQL на уровне jinja-слоя.
2. `<` разрешён в сыром тексте — SQL-операторы `<=`, `<>`, `<=>` не ломают парсер.
3. Trim-тире: `{%- -%}`, `{{- -}}`, `{#- -#}` (в апстриме ERROR-ноды).
4. `elif`/`else` — отдельные стейтменты, как в реальном Jinja2.
5. Пайп-фильтры в выражениях: `{{ x | sqlsafe }}`, `{{ x | default('y') }}`.
6. Кортежи: `f.op in ('IS NULL', 'IS NOT NULL')`.
7. Вызов функции как стейтмент: `{% ref('table') %}` (dbt-стиль).
8. Убраны HTML-правила и `{% call %}` (неоднозначность, в шаблонах не встречается).

## Использование

В `extension.toml` Zed-расширения:

```toml
[grammars.jinja2]
repository = "https://github.com/chelpav/tree-sitter-jinja2-sql"
commit = "<sha>"
```

## Разработка

```bash
tree-sitter generate --abi 14   # ABI 14 — совместимость со старыми Zed
tree-sitter test                # корпус 55/55
tree-sitter build --wasm        # docker (emscripten/emsdk)
```
