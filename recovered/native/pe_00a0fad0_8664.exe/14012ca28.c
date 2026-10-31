/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012ca28 */

undefined8 FUN_14012ca28(uint param_1,longlong param_2)

{
  undefined8 uVar1;
  uint local_res8 [4];
  undefined1 local_res18 [8];
  uint local_res20 [2];
  uint local_28 [2];
  uint *local_20;
  longlong local_18;
  
  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_2 + 0x38) = 1;
    *(undefined4 *)(param_2 + 0x34) = 0;
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 9;
  }
  else {
    local_res8[0] = param_1;
    if (((-1 < (int)param_1) && (param_1 < DAT_1403555e0)) &&
       ((*(byte *)((&DAT_1403551e0)[(longlong)(int)param_1 >> 6] + 0x38 +
                  (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0)) {
      local_20 = local_res8;
      local_res20[0] = param_1;
      local_28[0] = param_1;
      local_18 = param_2;
      uVar1 = FUN_14012caec(local_res18,local_28,&local_20,local_res20);
      return uVar1;
    }
    *(undefined1 *)(param_2 + 0x38) = 1;
    *(undefined4 *)(param_2 + 0x34) = 0;
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 9;
    FUN_1401210c8(0,0,0,0,0,param_2);
  }
  return 0xffffffff;
}

