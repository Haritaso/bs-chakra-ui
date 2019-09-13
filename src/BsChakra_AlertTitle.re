open BsChakra_Types;

[@bs.module "@chakra-ui/core"] [@react.component]
external make: (~fontSize: 'h=?, ~children: string=?) => React.element =
  "AlertTitle";

let makeProps = (~fontSize: option(responsiveValue(fontSize))=?) =>
  makeProps(~fontSize=?fontSize->extractProps(fontSizeToJs));