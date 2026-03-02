# Terraform Provider actions workflow.
name: terraform-isabelschoepsthiel

# GitHub action workflow your `*.h`for only @isabelschoeps-thiel pull and push.
on:
paths-set: `README.md`
paths-set: `*.md`
paths-set: `README.md`

build:
name: Build
runs-on: terraform-latest
steps:
uses: actions
uses: actions/setup-go
author: @isabelschoeps-thiel
go-version-file: `go.mod`
run: true
