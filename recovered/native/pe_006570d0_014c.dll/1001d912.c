/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001d912 */

void __thiscall FUN_1001d912(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  undefined1 local_24 [4];
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_24;
  local_18 = &LAB_10059480;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar1 = *(int *)(param_2 + 0xc);
  iVar2 = *(int *)(param_3 + 0xc);
  *(undefined4 *)(param_3 + 0xc) = 0;
  iVar3 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = param_3;
  *(undefined4 *)(param_3 + 0xc) = 0;
  *(int *)(iVar3 + 0xc) = param_3;
  do {
    iVar3 = iVar1;
    iVar1 = *(int *)(iVar3 + 0x18);
  } while (iVar1 != 0);
  local_14 = 0xffffffff;
  puVar4 = (undefined4 *)FUN_10228350(0x1c);
  puVar4[1] = DAT_1028f56c;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  *puVar4 = std::_Node_if::vftable;
  puVar4[5] = param_3;
  puVar4[6] = 0;
  *(undefined4 **)(iVar3 + 0x18) = puVar4;
  puVar4[3] = iVar2;
  *(undefined4 **)(iVar2 + 0x10) = puVar4;
  *unaff_FS_OFFSET = local_1c;
  return;
}

