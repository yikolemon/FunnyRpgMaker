/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140189b90 */

undefined8 * FUN_140189b90(undefined8 *param_1,undefined4 param_2)

{
  char *local_18;
  undefined1 local_10;
  
  switch(param_2) {
  case 0:
    local_18 = 
    "regex_error(error_collate): The expression contained an invalid collating element name.";
    break;
  case 1:
    local_18 = "regex_error(error_ctype): The expression contained an invalid character class name."
    ;
    break;
  case 2:
    local_18 = 
    "regex_error(error_escape): The expression contained an invalid escaped character, or a trailing escape."
    ;
    break;
  case 3:
    local_18 = "regex_error(error_backref): The expression contained an invalid back reference.";
    break;
  case 4:
    local_18 = "regex_error(error_brack): The expression contained mismatched [ and ].";
    break;
  case 5:
    local_18 = "regex_error(error_paren): The expression contained mismatched ( and ).";
    break;
  case 6:
    local_18 = "regex_error(error_brace): The expression contained mismatched { and }.";
    break;
  case 7:
    local_18 = 
    "regex_error(error_badbrace): The expression contained an invalid range in a {} expression.";
    break;
  case 8:
    local_18 = 
    "regex_error(error_range): The expression contained an invalid character range, such as [b-a] in most encodings."
    ;
    break;
  case 9:
    local_18 = 
    "regex_error(error_space): There was insufficient memory to convert the expression into a finite state machine."
    ;
    break;
  case 10:
    local_18 = 
    "regex_error(error_badrepeat): One of *?+{ was not preceded by a valid regular expression.";
    break;
  case 0xb:
    local_18 = 
    "regex_error(error_complexity): The complexity of an attempted match against a regular expression exceeded a pre-set level."
    ;
    break;
  case 0xc:
    local_18 = 
    "regex_error(error_stack): There was insufficient memory to determine whether the regular expression could match the specified character sequence."
    ;
    break;
  case 0xd:
    local_18 = "regex_error(error_parse)";
    break;
  case 0xe:
    local_18 = "regex_error(error_syntax)";
    break;
  default:
    local_18 = "regex_error";
  }
  *param_1 = std::exception::vftable;
  local_10 = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_140190510(&local_18);
  *(undefined4 *)(param_1 + 3) = param_2;
  *param_1 = std::regex_error::vftable;
  return param_1;
}

