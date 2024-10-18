#pragma once
#include "EditStyle.h"
// NP2StyleX_
#define EDITSTYLE_HOLE(style, name)		NP2STYLE_ ## style, CSTRLEN(name), (name), nullptr
#define EDITSTYLE_HOLEX(style, name)	style, CSTRLEN(name), (name), nullptr

//Scheme Default Settings++Autogenerated -- start of section automatically generated
#define SCHEME_SETTINGS_DEFAULT	\
		LexerAttr_NoLineComment |					\
		LexerAttr_NoBlockComment,					\
		TAB_WIDTH_4, INDENT_WIDTH_4,				\
		(1 << 0) | (1 << 1), /* level1, level2 */	\
		0,											\
		'\\', 0, 0,									\
		0,											\
		0, 0,										\
		0, 0,										\
		KeywordAttr_Default							\
		, 0,										\
		0, 0										\
//Scheme Default Settings--Autogenerated -- end of section automatically generated

#define EDITLEXER_HOLE(name, styles)	StyleTheme_Default, false, true, 0, COUNTOF(styles), CSTRLEN(name), (name), nullptr, nullptr
#define EDITLEXER_TEXT(name, styles)	StyleTheme_Default, false, false, 0, COUNTOF(styles), CSTRLEN(name), (name), nullptr, nullptr

#define NP2StyleX_MarginLineNumber		EDITSTYLE_HOLE(MarginLineNumber, L"Margin and Line Number")
#define NP2StyleX_MatchingBrace			EDITSTYLE_HOLE(MatchingBrace, L"Matching Brace")
#define NP2StyleX_MatchingBraceError	EDITSTYLE_HOLE(MatchingBraceError, L"Matching Brace Error")
#define NP2StyleX_ControlCharacter		EDITSTYLE_HOLE(ControlCharacter, L"Control Character")
#define NP2StyleX_IndentationGuide		EDITSTYLE_HOLE(IndentationGuide, L"Indentation Guide")
#define NP2StyleX_SelectedText			EDITSTYLE_HOLE(SelectedText, L"Selected Text")
#define NP2StyleX_Whitespace			EDITSTYLE_HOLE(Whitespace, L"Whitespace")
#define NP2StyleX_CurrentLine			EDITSTYLE_HOLE(CurrentLine, L"Current Line")
#define NP2StyleX_Caret					EDITSTYLE_HOLE(Caret, L"Caret")
#define NP2StyleX_LongLineMarker		EDITSTYLE_HOLE(LongLineMarker, L"Long Line Marker")
#define NP2StyleX_ExtraLineSpacing		EDITSTYLE_HOLE(ExtraLineSpacing, L"Extra Line Spacing")
#define NP2StyleX_FoldingMarker			EDITSTYLE_HOLE(FoldingMarker, L"Folding Marker")
#define NP2StyleX_MarkOccurrences		EDITSTYLE_HOLE(MarkOccurrences, L"Mark Occurrences")
#define NP2StyleX_DefaultCodeStyle		EDITSTYLE_HOLE(DefaultCodeStyle, L"Default Code Style")
#define NP2StyleX_DefaultTextStyle		EDITSTYLE_HOLE(DefaultTextStyle, L"Default Text Style")
#define NP2StyleX_FoldEllipsis			EDITSTYLE_HOLE(FoldEllipsis, L"Fold Ellipsis")
#define NP2StyleX_IMEIndicator			EDITSTYLE_HOLE(IMEIndicator, L"IME Indicator")
#define NP2StyleX_Bookmark				EDITSTYLE_HOLE(Bookmark, L"Bookmark")
#define NP2StyleX_CallTip				EDITSTYLE_HOLE(CallTip, L"CallTip")
#define NP2StyleX_CodeFolding			EDITSTYLE_HOLE(CodeFolding, L"Code Folding")
#define NP2StyleX_Link					EDITSTYLE_HOLE(Link, L"Link")
#define NP2StyleX_ChangeHistoryMarker	EDITSTYLE_HOLE(ChangeHistoryMarker, L"Change History Marker")

#define NP2StyleX_Default				EDITSTYLE_HOLE(Default, L"Default")
#define NP2StyleX_Comment				EDITSTYLE_HOLE(Comment, L"Comment")
#define NP2StyleX_Keyword				EDITSTYLE_HOLE(Keyword, L"Keyword")
#define NP2StyleX_TypeKeyword			EDITSTYLE_HOLE(TypeKeyword, L"Type Keyword")
#define NP2StyleX_String				EDITSTYLE_HOLE(String, L"String")
#define NP2StyleX_Number				EDITSTYLE_HOLE(Number, L"Number")
#define NP2StyleX_Operator				EDITSTYLE_HOLE(Operator, L"Operator")
#define NP2StyleX_Preprocessor			EDITSTYLE_HOLE(Preprocessor, L"Preprocessor")
#define NP2StyleX_VerbatimString		EDITSTYLE_HOLE(VerbatimString, L"Verbatim String")
#define NP2StyleX_Regex					EDITSTYLE_HOLE(Regex, L"Regex")
#define NP2StyleX_Attribute				EDITSTYLE_HOLE(Attribute, L"Attribute")
#define NP2StyleX_Directive				EDITSTYLE_HOLE(Directive, L"Directive")
#define NP2StyleX_Identifier			EDITSTYLE_HOLE(Identifier, L"Identifier")
#define NP2StyleX_DocComment			EDITSTYLE_HOLE(DocComment, L"Doc Comment")
#define NP2StyleX_DocCommentTag			EDITSTYLE_HOLE(DocCommentTag, L"Doc Comment Tag")
#define NP2StyleX_XMLTag				EDITSTYLE_HOLE(XMLTag, L"XML Tag")
#define NP2StyleX_XMLAttribute			EDITSTYLE_HOLE(XMLAttribute, L"XML Attribute")
#define NP2StyleX_XMLValue				EDITSTYLE_HOLE(XMLValue, L"XML Value")
#define NP2StyleX_XMLString				EDITSTYLE_HOLE(XMLString, L"XML String")
#define NP2StyleX_XMLOtherTag			EDITSTYLE_HOLE(XMLOtherTag, L"XML Other Tag")
#define NP2StyleX_XMLComment			EDITSTYLE_HOLE(XMLComment, L"XML Comment")
#define NP2StyleX_XMLEntity				EDITSTYLE_HOLE(XMLEntity, L"XML Entity")
#define NP2StyleX_XMLElementText		EDITSTYLE_HOLE(XMLElementText, L"XML Element Text")
#define NP2StyleX_XMLIdentifier			EDITSTYLE_HOLE(XMLIdentifier, L"XML Identifier")
#define NP2StyleX_XMLSGML				EDITSTYLE_HOLE(XMLSGML, L"SGML")
#define NP2StyleX_XMLCDATA				EDITSTYLE_HOLE(XMLCDATA, L"CDATA")

#define NP2StyleX_HTMLTag				EDITSTYLE_HOLE(HTMLTag, L"HTML Tag")
#define NP2StyleX_HTMLUnknownTag		EDITSTYLE_HOLE(HTMLUnknownTag, L"HTML Unknown Tag")
#define NP2StyleX_HTMLAttribute			EDITSTYLE_HOLE(HTMLAttribute, L"HTML Attribute")
#define NP2StyleX_HTMLUnknownAttribute	EDITSTYLE_HOLE(HTMLUnknownAttribute, L"HTML Unknown Attribute")
#define NP2StyleX_HTMLValue				EDITSTYLE_HOLE(HTMLValue, L"HTML Value")
#define NP2StyleX_HTMLString			EDITSTYLE_HOLE(HTMLString, L"HTML String")
#define NP2StyleX_HTMLOtherTag			EDITSTYLE_HOLE(HTMLOtherTag, L"HTML Other Tag")
#define NP2StyleX_HTMLComment			EDITSTYLE_HOLE(HTMLComment, L"HTML Comment")
#define NP2StyleX_HTMLEntity			EDITSTYLE_HOLE(HTMLEntity, L"HTML Entity")
#define NP2StyleX_HTMLElementText		EDITSTYLE_HOLE(HTMLElementText, L"HTML Element Text")

#define NP2StyleX_ASPTag				EDITSTYLE_HOLE(ASPTag, L"ASP Tag")
#define NP2StyleX_PHPTag				EDITSTYLE_HOLE(PHPTag, L"PHP Tag")

#define NP2StyleX_JSDefault				EDITSTYLE_HOLE(JSDefault, L"JS Default")
#define NP2StyleX_JSComment				EDITSTYLE_HOLE(JSComment, L"JS Comment")
#define NP2StyleX_JSKeyword				EDITSTYLE_HOLE(JSKeyword, L"JS Keyword")
#define NP2StyleX_JSDocComment			EDITSTYLE_HOLE(JSDocComment, L"JS Doc Comment")
#define NP2StyleX_JSString				EDITSTYLE_HOLE(JSString, L"JS String")
#define NP2StyleX_JSRegex				EDITSTYLE_HOLE(JSRegex, L"JS Regex")
#define NP2StyleX_JSNumber				EDITSTYLE_HOLE(JSNumber, L"JS Number")
#define NP2StyleX_JSOperator			EDITSTYLE_HOLE(JSOperator, L"JS Operator")
#define NP2StyleX_JSTemplateLiteral		EDITSTYLE_HOLE(JSTemplateLiteral, L"JS Template Literal")

#define NP2StyleX_VBSDefault			EDITSTYLE_HOLE(VBSDefault, L"VBS Default")
#define NP2StyleX_VBSComment			EDITSTYLE_HOLE(VBSComment, L"VBS Comment")
#define NP2StyleX_VBSKeyword			EDITSTYLE_HOLE(VBSKeyword, L"VBS Keyword")
#define NP2StyleX_VBSOperator			EDITSTYLE_HOLE(VBSOperator, L"VBS Operator")
#define NP2StyleX_VBSString				EDITSTYLE_HOLE(VBSString, L"VBS String")
#define NP2StyleX_VBSNumber				EDITSTYLE_HOLE(VBSNumber, L"VBS Number")

#define NP2StyleX_TagClass				EDITSTYLE_HOLE(TagClass, L"Tag Class")
#define NP2StyleX_TagId					EDITSTYLE_HOLE(TagId, L"Tag Id")
#define NP2StyleX_TagAttribute			EDITSTYLE_HOLE(TagAttribute, L"Tag Attribute")
#define NP2StyleX_PseudoClass			EDITSTYLE_HOLE(PseudoClass, L"Pseudo Class")
#define NP2StyleX_UnknownPseudoClass	EDITSTYLE_HOLE(UnknownPseudoClass, L"Unknown Pseudo Class")
#define NP2StyleX_PseudoElement			EDITSTYLE_HOLE(PseudoElement, L"Pseudo Element")
#define NP2StyleX_UnknownProperty		EDITSTYLE_HOLE(UnknownProperty, L"Unknown Property")
#define NP2StyleX_AtRule				EDITSTYLE_HOLE(AtRule, L"At Rule")
#define NP2StyleX_Value					EDITSTYLE_HOLE(Value, L"Value")
#define NP2StyleX_Important				EDITSTYLE_HOLE(Important, L"Important")
#define NP2StyleX_UnknownPseudoElement	EDITSTYLE_HOLE(UnknownPseudoElement, L"Unknown Pseudo Element")

#define NP2StyleX_Class					EDITSTYLE_HOLE(Class, L"Class")
#define NP2StyleX_Structure				EDITSTYLE_HOLE(Structure, L"Structure")
#define NP2StyleX_Union					EDITSTYLE_HOLE(Union, L"Union")
#define NP2StyleX_Interface				EDITSTYLE_HOLE(Interface, L"Interface")
#define NP2StyleX_Trait					EDITSTYLE_HOLE(Trait, L"Trait")
#define NP2StyleX_Enumeration			EDITSTYLE_HOLE(Enumeration, L"Enumeration")
#define NP2StyleX_Constant				EDITSTYLE_HOLE(Constant, L"Constant")
#define NP2StyleX_Variable				EDITSTYLE_HOLE(Variable, L"Variable")
#define NP2StyleX_Function				EDITSTYLE_HOLE(Function, L"Function")
#define NP2StyleX_Method				EDITSTYLE_HOLE(Method, L"Method")
#define NP2StyleX_Field					EDITSTYLE_HOLE(Field, L"Field")
#define NP2StyleX_Property				EDITSTYLE_HOLE(Property, L"Property")
#define NP2StyleX_Macro					EDITSTYLE_HOLE(Macro, L"Macro")
#define NP2StyleX_Annotation			EDITSTYLE_HOLE(Annotation, L"Annotation")
#define NP2StyleX_Record				EDITSTYLE_HOLE(Record, L"Record")
#define NP2StyleX_Type					EDITSTYLE_HOLE(Type, L"Type")
#define NP2StyleX_FunctionDefinition	EDITSTYLE_HOLE(FunctionDefinition, L"Function Definition")
#define NP2StyleX_Protocol				EDITSTYLE_HOLE(Protocol, L"Protocol")
#define NP2StyleX_MethodDefinition		EDITSTYLE_HOLE(MethodDefinition, L"Method Definition")
#define NP2StyleX_MacroKeyword			EDITSTYLE_HOLE(MacroKeyword, L"Macro Keyword")
#define NP2StyleX_Label					EDITSTYLE_HOLE(Label, L"Label")
#define NP2StyleX_Command				EDITSTYLE_HOLE(Command, L"Command")
#define NP2StyleX_RawString				EDITSTYLE_HOLE(RawString, L"Raw String")
#define NP2StyleX_HexString				EDITSTYLE_HOLE(HexString, L"Hex String")
#define NP2StyleX_Instruction			EDITSTYLE_HOLE(Instruction, L"Instruction")
#define NP2StyleX_Register				EDITSTYLE_HOLE(Register, L"Register")
#define NP2StyleX_Backticks				EDITSTYLE_HOLE(Backticks, L"Backticks")
#define NP2StyleX_TripleQuotedString	EDITSTYLE_HOLE(TripleQuotedString, L"Triple Quoted String")
#define NP2StyleX_BasicFunction			EDITSTYLE_HOLE(BasicFunction, L"Basic Function")
#define NP2StyleX_PredefinedVariable	EDITSTYLE_HOLE(PredefinedVariable, L"Predefined Variable")
#define NP2StyleX_MacroFunction			EDITSTYLE_HOLE(MacroFunction, L"Macro Function")

#define NP2StyleX_ReservedWord			EDITSTYLE_HOLE(ReservedWord, L"Reserved Word")
#define NP2StyleX_EscapeSequence		EDITSTYLE_HOLE(EscapeSequence, L"Escape Sequence")
#define NP2StyleX_Placeholder			EDITSTYLE_HOLE(Placeholder, L"Placeholder")
#define NP2StyleX_FormatSpecifier		EDITSTYLE_HOLE(FormatSpecifier, L"Format Specifier")
#define NP2StyleX_TaskMarker			EDITSTYLE_HOLE(TaskMarker, L"Task Marker")

#define NP2StyleX_BracketArgument		EDITSTYLE_HOLE(BracketArgument, L"Bracket Argument")

#define NP2StyleX_ScalarVar				EDITSTYLE_HOLE(ScalarVar, L"Scalar $var")
#define NP2StyleX_ArrayVar				EDITSTYLE_HOLE(ArrayVar, L"Array @var")
#define NP2StyleX_HashVar				EDITSTYLE_HOLE(HashVar, L"Hash %var")
#define NP2StyleX_SymbolTableVar		EDITSTYLE_HOLE(SymbolTableVar, L"Symbol Table *var")
#define NP2STYLEX_SymbolArray			EDITSTYLE_HOLE(SymbolArray, L"Symbol Array")

#define NP2StyleX_HeredocDelimiter		EDITSTYLE_HOLE(HeredocDelimiter, L"Here-doc (Delimiter)")
#define NP2StyleX_HeredocSingleQuoted	EDITSTYLE_HOLE(HeredocSingleQuoted, L"Here-doc (Single Quoted)")
#define NP2StyleX_HeredocDoubleQuoted	EDITSTYLE_HOLE(HeredocDoubleQuoted, L"Here-doc (Double Quoted)")
#define NP2StyleX_HeredocBackticks		EDITSTYLE_HOLE(HeredocBackticks, L"Here-doc (Backticks)")

#define NP2StyleX_StringArray			EDITSTYLE_HOLE(StringArray, L"String Array")
#define NP2StyleX_Prototype				EDITSTYLE_HOLE(Prototype, L"Prototype")
#define NP2StyleX_FormatIdentifier		EDITSTYLE_HOLE(FormatIdentifier, L"Format Identifier")
#define NP2StyleX_FormatBody			EDITSTYLE_HOLE(FormatBody, L"Format Body")
#define NP2StyleX_PODCommon				EDITSTYLE_HOLE(PODCommon, L"POD (Common)")
#define NP2StyleX_PODVerbatim			EDITSTYLE_HOLE(PODVerbatim, L"POD (Verbatim)")
#define NP2StyleX_DataSection			EDITSTYLE_HOLE(DataSection, L"Data Section")
#define NP2StyleX_ParsingError			EDITSTYLE_HOLE(ParsingError, L"Parsing Error")

#define NP2StyleX_Substitution			EDITSTYLE_HOLE(Substitution, L"Substitution")
#define NP2StyleX_Modifier				EDITSTYLE_HOLE(Modifier, L"Modifier")

#define NP2StyleX_Metamethod			EDITSTYLE_HOLE(Metamethod, L"Metamethod")

#define NP2StyleX_Bytes					EDITSTYLE_HOLE(Bytes, L"Bytes")
#define NP2StyleX_RawBytes				EDITSTYLE_HOLE(RawBytes, L"Raw Bytes")
#define NP2StyleX_TripleQuotedBytes		EDITSTYLE_HOLE(TripleQuotedBytes, L"Triple Quoted Bytes")
#define NP2StyleX_Lifetime				EDITSTYLE_HOLE(Lifetime, L"Lifetime")
#define NP2StyleX_Decorator				EDITSTYLE_HOLE(Decorator, L"Decorator")
#define NP2StyleX_BuiltInFunction		EDITSTYLE_HOLE(BuiltInFunction, L"Built-in Function")

#define NP2StyleX_BuiltInConstant		EDITSTYLE_HOLE(BuiltInConstant, L"Built-in Constant")
#define NP2StyleX_FormattedString		EDITSTYLE_HOLE(FormattedString, L"Formatted String")
#define NP2StyleX_TripleQuotedFString	EDITSTYLE_HOLE(TripleQuotedFString, L"Triple Quoted Formatted String")
#define NP2StyleX_Module				EDITSTYLE_HOLE(Module, L"Module")
#define NP2StyleX_POD					EDITSTYLE_HOLE(POD, L"POD")
#define NP2StyleX_Symbol				EDITSTYLE_HOLE(Symbol, L"Symbol")

#define NP2StyleX_Cmdlet				EDITSTYLE_HOLE(Cmdlet, L"Cmdlet")
#define NP2StyleX_Alias					EDITSTYLE_HOLE(Alias, L"Alias")
#define NP2StyleX_Column1				EDITSTYLE_HOLE(Column1, L"Column 1")
#define NP2StyleX_Column2				EDITSTYLE_HOLE(Column2, L"Column 2")
#define NP2StyleX_Column3				EDITSTYLE_HOLE(Column3, L"Column 3")
#define NP2StyleX_Column4				EDITSTYLE_HOLE(Column4, L"Column 4")
#define NP2StyleX_Column5				EDITSTYLE_HOLE(Column5, L"Column 5")
#define NP2StyleX_Column6				EDITSTYLE_HOLE(Column6, L"Column 6")
#define NP2StyleX_Column7				EDITSTYLE_HOLE(Column7, L"Column 7")
#define NP2StyleX_Column8				EDITSTYLE_HOLE(Column8, L"Column 8")
#define NP2StyleX_SendKey				EDITSTYLE_HOLE(SendKey, L"Send Key")
#define NP2StyleX_Special				EDITSTYLE_HOLE(Special, L"Special")
#define NP2StyleX_HotString				EDITSTYLE_HOLE(HotString, L"HotString")
#define NP2StyleX_HotKey				EDITSTYLE_HOLE(HotKey, L"HotKey")
#define NP2StyleX_Column9				EDITSTYLE_HOLE(Column9, L"Column 9")
#define NP2StyleX_Column10				EDITSTYLE_HOLE(Column10, L"Column 10")

#define NP2StyleX_PascalKeyword			EDITSTYLE_HOLE(PascalKeyword, L"Pascal Keyword")
#define NP2StyleX_Event					EDITSTYLE_HOLE(Event, L"Event")
#define NP2StyleX_Parameter				EDITSTYLE_HOLE(Parameter, L"Parameter")
#define NP2StyleX_InlineExpansion		EDITSTYLE_HOLE(InlineExpansion, L"Inline Expansion")
#define NP2StyleX_Pragma				EDITSTYLE_HOLE(Pragma, L"Pragma")

#define NP2StyleX_Section				EDITSTYLE_HOLE(Section, L"Section")
#define NP2StyleX_Assignment			EDITSTYLE_HOLE(Assignment, L"Assignment")
#define NP2StyleX_DefaultValue			EDITSTYLE_HOLE(DefaultValue, L"Default Value")
#define NP2StyleX_Header1				EDITSTYLE_HOLE(Header1, L"Header 1")
#define NP2StyleX_Header2				EDITSTYLE_HOLE(Header2, L"Header 2")
#define NP2StyleX_Header3				EDITSTYLE_HOLE(Header3, L"Header 3")
#define NP2StyleX_Header4				EDITSTYLE_HOLE(Header4, L"Header 4")
#define NP2StyleX_Header5				EDITSTYLE_HOLE(Header5, L"Header 5")
#define NP2StyleX_Header6				EDITSTYLE_HOLE(Header6, L"Header 6")
#define NP2StyleX_HorizontalRule		EDITSTYLE_HOLE(HorizontalRule, L"Horizontal Rule")
#define NP2StyleX_BlockQuote			EDITSTYLE_HOLE(BlockQuote, L"Block Quote")
#define NP2StyleX_OrderedList			EDITSTYLE_HOLE(OrderedList, L"Ordered List")
#define NP2StyleX_UnorderedList			EDITSTYLE_HOLE(UnorderedList, L"Unordered List")
#define NP2StyleX_TaskList				EDITSTYLE_HOLE(TaskList, L"Task List")
#define NP2StyleX_CodeBlock				EDITSTYLE_HOLE(CodeBlock, L"Code Block")
#define NP2StyleX_InlineCode			EDITSTYLE_HOLE(InlineCode, L"Inline Code")
#define NP2StyleX_Emphasis				EDITSTYLE_HOLE(Emphasis, L"Emphasis")
#define NP2StyleX_Strong				EDITSTYLE_HOLE(Strong, L"Strong")
#define NP2StyleX_Strikethrough			EDITSTYLE_HOLE(Strikethrough, L"Strikethrough")
#define NP2StyleX_Emoji					EDITSTYLE_HOLE(Emoji, L"Emoji")
#define NP2StyleX_Delimiter				EDITSTYLE_HOLE(Delimiter, L"Delimiter")
#define NP2StyleX_DoubleQuotedString	EDITSTYLE_HOLE(DoubleQuotedString, L"Double Quoted String")
#define NP2StyleX_SingleQuotedString	EDITSTYLE_HOLE(SingleQuotedString, L"Single Quoted String")
#define NP2StyleX_Key					EDITSTYLE_HOLE(Key, L"Key")
#define NP2StyleX_ParameterExpansion	EDITSTYLE_HOLE(ParameterExpansion, L"Parameter Expansion")
#define NP2StyleX_Table					EDITSTYLE_HOLE(Table, L"Table")
#define NP2StyleX_Pair					EDITSTYLE_HOLE(Pair, L"Pair")
#define NP2StyleX_Tuple					EDITSTYLE_HOLE(Tuple, L"Tuple")
#define NP2StyleX_LinkText				EDITSTYLE_HOLE(LinkText, L"Link Text")
#define NP2StyleX_DelimiterRow			EDITSTYLE_HOLE(DelimiterRow, L"Delimiter Row")
#define NP2StyleX_SourceDestination		EDITSTYLE_HOLE(SourceDestination, L"Source and Destination")
#define NP2StyleX_PositionSetting		EDITSTYLE_HOLE(PositionSetting, L"Position Setting")
#define NP2StyleX_LineAddition			EDITSTYLE_HOLE(LineAddition, L"Line Addition")
#define NP2StyleX_LineRemoval			EDITSTYLE_HOLE(LineRemoval, L"Line Removal")
#define NP2StyleX_LineChange			EDITSTYLE_HOLE(LineChange, L"Line Change")
#define NP2StyleX_ExampleList			EDITSTYLE_HOLE(ExampleList, L"Example List")
#define NP2StyleX_DisplayMath			EDITSTYLE_HOLE(DisplayMath, L"Display Math")
#define NP2StyleX_InlineMath			EDITSTYLE_HOLE(InlineMath, L"Inline Math")
#define NP2StyleX_Superscript			EDITSTYLE_HOLE(Superscript, L"Superscript")
#define NP2StyleX_Subscript				EDITSTYLE_HOLE(Subscript, L"Subscript")

#define NP2StyleX_CPUInstruction		EDITSTYLE_HOLE(CPUInstruction, L"CPU Instruction")
#define NP2StyleX_FPUInstruction		EDITSTYLE_HOLE(FPUInstruction, L"FPU Instruction")
#define NP2StyleX_ExtendedInstruction	EDITSTYLE_HOLE(ExtendedInstruction, L"Extended Instruction")
#define NP2StyleX_DirectiveOperand		EDITSTYLE_HOLE(DirectiveOperand, L"Directive Operand")
#define NP2StyleX_InternalFilter		EDITSTYLE_HOLE(InternalFilter, L"Internal Filter")
#define NP2StyleX_ExternalFilter		EDITSTYLE_HOLE(ExternalFilter, L"External Filter")
#define NP2StyleX_File					EDITSTYLE_HOLE(File, L"File")
#define NP2StyleX_DefinitionList		EDITSTYLE_HOLE(DefinitionList, L"Definition List")
#define NP2StyleX_Money					EDITSTYLE_HOLE(Money, L"Money")
#define NP2StyleX_Issue					EDITSTYLE_HOLE(Issue, L"Issue")
#define NP2StyleX_MagicMethod			EDITSTYLE_HOLE(MagicMethod, L"Magic Method")
#define NP2StyleX_MagicConstant			EDITSTYLE_HOLE(MagicConstant, L"Magic Constant")
#define NP2StyleX_TemplateLiteral		EDITSTYLE_HOLE(TemplateLiteral, L"Template Literal")
#define NP2StyleX_HeredocString			EDITSTYLE_HOLE(HeredocString, L"Heredoc String")
#define NP2StyleX_NowdocString			EDITSTYLE_HOLE(NowdocString, L"Nowdoc String")
#define NP2StyleX_DateTime				EDITSTYLE_HOLE(DateTime, L"DateTime")
#define NP2StyleX_Action				EDITSTYLE_HOLE(Action, L"Action")
#define NP2StyleX_Feature				EDITSTYLE_HOLE(Feature, L"Feature")
#define NP2StyleX_Anchor				EDITSTYLE_HOLE(Anchor, L"Anchor")
#define NP2StyleX_TextBlock				EDITSTYLE_HOLE(TextBlock, L"Text Block")
#define NP2StyleX_Math					EDITSTYLE_HOLE(Math, L"Math")
#define NP2StyleX_SpecialCharacter		EDITSTYLE_HOLE(SpecialCharacter, L"Special Character")
#define NP2StyleX_Tag					EDITSTYLE_HOLE(Tag, L"Tag")
#define NP2StyleX_Option				EDITSTYLE_HOLE(Option, L"Option")
#define NP2StyleX_Title					EDITSTYLE_HOLE(Title, L"Title")
#define NP2StyleX_Quote					EDITSTYLE_HOLE(Quote, L"Quote")
#define NP2StyleX_VerbatimSegment		EDITSTYLE_HOLE(VerbatimSegment, L"Verbatim Segment")
#define NP2StyleX_ListCode				EDITSTYLE_HOLE(ListCode, L"List Code")
#define NP2StyleX_Chapter				EDITSTYLE_HOLE(Chapter, L"Chapter")
#define NP2StyleX_Document				EDITSTYLE_HOLE(Document, L"Document")
#define NP2StyleX_Package				EDITSTYLE_HOLE(Package, L"Package")
#define NP2StyleX_Subection				EDITSTYLE_HOLE(Subection, L"Subection")
#define NP2StyleX_StandardFunction		EDITSTYLE_HOLE(StandardFunction, L"Standard Function")
#define NP2StyleX_StandardType			EDITSTYLE_HOLE(StandardType, L"Standard Type")
#define NP2StyleX_Subsubection			EDITSTYLE_HOLE(Subsubection, L"Subsubection")
#define NP2StyleX_SystemTaskFunction	EDITSTYLE_HOLE(SystemTaskFunction, L"System Task and Function")
#define NP2StyleX_Intrinsic				EDITSTYLE_HOLE(Intrinsic, L"Intrinsic")
#define NP2StyleX_Metadata				EDITSTYLE_HOLE(Metadata, L"Metadata")
#define NP2StyleX_COMDAT				EDITSTYLE_HOLE(COMDAT, L"COMDAT")
#define NP2StyleX_GlobalVariable		EDITSTYLE_HOLE(GlobalVariable, L"Global Variable")
#define NP2StyleX_DelimitedString		EDITSTYLE_HOLE(DelimitedString, L"Delimited String")
#define NP2StyleX_TokenString			EDITSTYLE_HOLE(TokenString, L"Token String")
#define NP2StyleX_CodeQuotation			EDITSTYLE_HOLE(CodeQuotation, L"Code Quotation")
#define NP2StyleX_InlineAsm				EDITSTYLE_HOLE(InlineAsm, L"Inline Asm")
#define NP2StyleX_Callback				EDITSTYLE_HOLE(Callback, L"Callback")
#define NP2StyleX_Target				EDITSTYLE_HOLE(Target, L"Target")
#define NP2StyleX_Rule					EDITSTYLE_HOLE(Rule, L"Rule")
#define NP2StyleX_Citation				EDITSTYLE_HOLE(Citation, L"Citation")
#define NP2StyleX_BitField				EDITSTYLE_HOLE(BitField, L"Bit Field")

#define EDITSTYLE_DEFAULT 				{ STYLE_DEFAULT, NP2StyleX_Default, L"" }
