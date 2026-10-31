/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10022f7c */

void __thiscall FUN_10022f7c(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined8 local_20;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  if (*(char *)(param_1 + 0x38) == '\x01') {
    lVar4 = __alldiv(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),10000000,0);
    if (lVar4 != *(longlong *)(param_1 + 0x60)) {
      local_20 = lVar4;
      if (*(int *)(param_1 + 0x34) == 0) {
        FUN_10269d22(&local_44,&local_20);
      }
      else {
        FUN_1026965c(&local_44,&local_20);
      }
      *(undefined4 *)(param_1 + 0x5c) = local_24;
      *(undefined4 *)(param_1 + 0x4c) = local_34;
      *(undefined4 *)(param_1 + 0x50) = uStack_30;
      *(undefined4 *)(param_1 + 0x54) = uStack_2c;
      *(undefined4 *)(param_1 + 0x58) = uStack_28;
      *(undefined4 *)(param_1 + 0x3c) = local_44;
      *(undefined4 *)(param_1 + 0x40) = uStack_40;
      *(undefined4 *)(param_1 + 0x44) = uStack_3c;
      *(undefined4 *)(param_1 + 0x48) = uStack_38;
      *(longlong *)(param_1 + 0x60) = lVar4;
    }
  }
  puVar3 = *(undefined4 **)(param_1 + 0x68);
  puVar1 = *(undefined4 **)(param_1 + 0x6c);
  if (puVar3 != puVar1) {
    do {
      (**(code **)(*(int *)*puVar3 + 4))(param_2,param_1 + 0x3c,param_3);
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar1);
  }
  if (*(uint *)(param_1 + 0x30) < 0x10) {
    iVar2 = param_1 + 0x1c;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1c);
  }
  FUN_1001909c(iVar2,*(int *)(param_1 + 0x2c) + iVar2);
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

