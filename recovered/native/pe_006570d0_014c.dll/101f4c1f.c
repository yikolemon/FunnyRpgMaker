/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f4c1f */

void __fastcall
FUN_101f4c1f(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined2 param_6,undefined2 param_7)

{
  undefined4 uVar1;
  int local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_14;
  uVar1 = *param_4;
  *(undefined8 *)(param_1 + 5) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[7] = param_2;
  param_1[8] = param_3;
  *param_1 = param_4;
  *(undefined2 *)(param_1 + 9) = param_6;
  *(undefined2 *)((int)param_1 + 0x26) = param_7;
  uVar1 = FUN_101c2a50(uVar1,4,0,param_5,0,&local_14);
  param_1[4] = uVar1;
  if (local_14 == 0) {
    param_1[6] = param_5;
    param_1[5] = uVar1;
  }
  if (DAT_10388d00 == (local_10 ^ (uint)&local_14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

