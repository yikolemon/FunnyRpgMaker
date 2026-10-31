/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009ae42 */

int FUN_14009ae42(int param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  if (param_2 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)FUN_140088c06();
  }
  local_58[0] = 0;
  FUN_14008fda3(param_2 + 8,0);
  FUN_140085d59(param_2 + 10,0);
  FUN_14008fe7f(*param_2);
  FUN_140077d91(local_58,0x20,"WindowOverViewport_%08X",*param_2);
  FUN_14007ab2c(3,0);
  FUN_14007ab2c(4,0);
  local_60 = 0;
  FUN_14007ae77(2);
  FUN_140085d7e(local_58,0,(param_3 & 8) * 0x10 + (param_3 & 1) * 0x200 + 0xa2027);
  FUN_14007af87(3);
  if (param_1 == 0) {
    param_1 = FUN_140091695("DockSpace");
  }
  local_60 = 0;
  FUN_14009aa30(param_1,&local_60,param_3,param_4);
  FUN_140088c18();
  if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_88)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_88);
}

