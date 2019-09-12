open BsChakra_Types;

[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~children: React.element,
    ~isTruncated: bool=?,
    ~textAlign: 'textalign=?,
    ~as_: [@bs.string] [ | `p | `span]=?,
    ~fontWeight: [@bs.string] [ | `normal | `bold | `medium]=?,
    ~font: 'f=?,
    ~letterSpacing: 'letter=?,
    ~lineHeight: 'b=?,
    ~fontSize: 'a=?
  ) =>
  React.element =
  "Heading";

let makeProps =
    (
      ~fontSize: option(responsiveValue(fontSize))=?,
      ~lineHeight: option(responsiveValue(lineHeight))=?,
      ~font: option(responsiveValue(font))=?,
      ~letterSpacing: option(responsiveValue(letterSpacing))=?,
      ~textAlign: option(responsiveValue(textAlign))=?,
    ) =>
  makeProps(
    ~fontSize=?fontSize->extractProps(fontSizeToJs),
    ~lineHeight=?lineHeight->extractProps(lineHeightToJs),
    ~font=?font->extractProps(fontToJs),
    ~letterSpacing=?letterSpacing->extractProps(letterSpacingToJs),
    ~textAlign=?textAlign->extractProps(textAlignToJs),
  );