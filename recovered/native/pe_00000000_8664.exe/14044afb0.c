/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14044afb0 */

undefined8 * FUN_14044afb0(undefined8 *param_1,undefined4 param_2)

{
  char *local_18;
  undefined1 local_10;
  
  switch(param_2) {
  case 0:
    local_18 = &DAT_14059c920;
    break;
  case 1:
    local_18 = &DAT_14059c980;
    break;
  case 2:
    local_18 = "";
    break;
  case 3:
    local_18 = &DAT_14059ca80;
    break;
  case 4:
    local_18 = &DAT_14059cad0;
    break;
  case 5:
    local_18 = &DAT_14059cb20;
    break;
  case 6:
    local_18 = &DAT_14059c640;
    break;
  case 7:
    local_18 = &DAT_14059c700;
    break;
  case 8:
    local_18 = &DAT_14059c690;
    break;
  case 9:
    local_18 = "";
    break;
  case 10:
    local_18 = &DAT_14059c760;
    break;
  case 0xb:
    local_18 = &DAT_14059c7c0;
    break;
  case 0xc:
    local_18 = &DAT_14059c9e0;
    break;
  case 0xd:
    local_18 = "r";
    break;
  case 0xe:
    local_18 = "r";
    break;
  default:
    local_18 = "nt delete[] closure\'";
  }
  *param_1 = &DAT_1404bd618;
  local_10 = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_14047fec0(&local_18);
  *(undefined4 *)(param_1 + 3) = param_2;
  *param_1 = &DAT_1404cd5d8;
  return param_1;
}

