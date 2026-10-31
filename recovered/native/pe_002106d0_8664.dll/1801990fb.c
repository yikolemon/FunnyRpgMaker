/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801990fb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801990fb(longlong param_1,longlong param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(param_1 + 0x28);
  uStack_20 = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(param_1 + 0x38) = param_2;
  fVar1 = (float)(int)*(undefined8 *)(param_2 + 0x1c);
  auVar2._4_4_ = (float)(int)((ulonglong)*(undefined8 *)(param_2 + 0x1c) >> 0x20);
  auVar2._0_4_ = fVar1;
  auVar2._8_8_ = 0;
  auVar2 = divps(_DAT_1802dc280,auVar2);
  *(longlong *)(param_1 + 0x54) = auVar2._0_8_;
  *(longlong *)(param_1 + 0x28) = param_2;
  local_18 = *(undefined8 *)(param_1 + 0x28);
  local_10 = *(undefined8 *)(param_1 + 0x30);
  FUN_180198e76(fVar1,&local_28);
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_48);
}

