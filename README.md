# compress-pdf - cli util to compress a pdf

This cli script is a trivial wrapper around `gs` from `ghostscript`, which itself wraps `convert`.
It simplifies your pdf compression experience. It supports pipelines! \o/ (using tmp files...).


## Install

```
git clone git@github.com/jbenet/compress-pdf
cd compress-pdf
./install.sh
```

## Usage

```
> compress-pdf
Usage: compress-pdf <in-pdf> [<out-pdf>]
Compress PDF files using gs and compress.
```

### Compress a file

```
> compress-pdf foo.pdf
compressing foo.pdf to foo.compressed.pdf
```

or

```
> compress-pdf in.pdf out.pdf
compressing in.pdf to out.pdf
```

or

### Compress a stream

Note: uses tmp files to buffer.

```
> compress-pdf <in.pdf >out.pdf
Awaiting pdf from stdin (stream mode)...
If you meant to compress a file, use: ./compress-pdf <file>
```

## License

MIT
