/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019d1ae */

void FUN_18019d1ae(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  float local_40;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined8 local_2c;
  undefined8 uStack_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (*(short *)(lVar1 + 0x32) != 0) {
    lVar2 = FUN_18019abe2(param_1);
    if (lVar2 != 0) goto LAB_18019d24b;
  }
  lVar2 = FUN_18019abe2(param_1,0x20);
  local_2c = 0;
  uStack_24 = 0;
  local_3c = 0;
  uStack_34 = 0;
  local_1c = 0xffffffff;
  local_44 = 0;
  if (lVar2 == 0) {
    local_40 = (float)(int)(*(float *)(param_1 + 0x14) * DAT_1802bb8d8 + DAT_1802dbb2c);
  }
  else {
    local_40 = *(float *)(lVar2 + 4);
  }
  lVar2 = FUN_180197c73(*(undefined8 *)(lVar1 + 8),param_1,0);
LAB_18019d24b:
  *(int *)(param_1 + 0x40) =
       (int)((ulonglong)(lVar2 - *(longlong *)(param_1 + 0x38)) >> 2) * -0x45d1745d;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar2 + 4);
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_68);
}

