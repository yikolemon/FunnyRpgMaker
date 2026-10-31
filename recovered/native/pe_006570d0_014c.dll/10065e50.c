/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10065e50 */

void FUN_10065e50(int param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_48;
  int local_44;
  int local_40;
  undefined8 *local_3c;
  undefined1 local_38;
  undefined1 local_34;
  undefined1 local_30;
  undefined1 local_2c;
  undefined1 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_48;
  iVar4 = (param_2 - param_1 >> 2) * -0x55555555;
  iVar2 = iVar4 >> 1;
  if (0 < iVar2) {
    uVar3 = iVar2 + 1;
    puVar1 = (undefined8 *)(param_1 + iVar2 * 0xc);
    do {
      local_44 = uVar3 - 2;
      local_18 = *(undefined4 *)((int)puVar1 + -4);
      local_20 = *(undefined8 *)((int)puVar1 + -0xc);
      local_30 = local_24;
      local_34 = local_28;
      local_38 = local_2c;
      local_48 = param_1;
      local_40 = iVar4;
      local_3c = &local_20;
      FUN_10065f9e();
      uVar3 = uVar3 - 1;
      puVar1 = (undefined8 *)((int)puVar1 + -0xc);
    } while (1 < uVar3);
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

