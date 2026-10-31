/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000ec81 */

void FUN_14000ec81(undefined8 param_1,uint param_2)

{
  uint uVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  if (0x7f < param_2) {
    if (param_2 < 0x800) {
      uVar1 = param_2 >> 6 | 0xc0;
    }
    else {
      if (param_2 < 0x10000) {
        if ((param_2 & 0xf800) == 0xd800) {
          FUN_14000ee68(local_30,"[0xD800, 0xDFFF] are not valid UTF-8.");
                    /* WARNING: Subroutine does not return */
          FUN_140106270(local_30,&DAT_14017a200);
        }
        uVar1 = param_2 >> 0xc | 0xe0;
      }
      else {
        if (0x10ffff < param_2) {
          if (DAT_1401c9640 == (local_18 ^ (ulonglong)auStack_58)) {
            return;
          }
          goto LAB_14000ed5b;
        }
        FUN_14000cf50(param_1,param_2 >> 0x12 | 0xf0);
        uVar1 = param_2 >> 0xc & 0xfff3f | 0x80;
      }
      FUN_14000cf50(param_1,uVar1);
      uVar1 = param_2 >> 6 & 0x3ffff3f | 0x80;
    }
    FUN_14000cf50(param_1,uVar1);
    param_2 = param_2 & 0xffffff3f | 0x80;
  }
  if (DAT_1401c9640 == (local_18 ^ (ulonglong)auStack_58)) {
    FUN_14000cf50(param_1,param_2);
    return;
  }
LAB_14000ed5b:
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_18 ^ (ulonglong)auStack_58);
}

