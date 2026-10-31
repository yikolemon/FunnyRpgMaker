/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021a6b2 */

undefined1 * __fastcall FUN_1021a6b2(undefined4 param_1,int param_2,int param_3,code *param_4)

{
  ushort uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 *local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  local_20 = param_2;
  puVar3 = (undefined1 *)FUN_101c21f6(param_1,*(ushort *)(param_3 + 8) + 1,&local_18);
  iVar2 = local_20;
  puVar5 = (undefined1 *)0x0;
  if (local_18 == 0) {
    local_24 = puVar3;
    local_18 = FUN_101c461e(local_20,*(undefined4 *)(param_3 + 0xc));
    if ((local_18 == 0) &&
       (local_18 = FUN_101c4b69(iVar2,*(undefined2 *)(param_3 + 8)), local_18 == 0)) {
      uVar1 = *(ushort *)(param_3 + 8);
      if (uVar1 == 0) {
        *local_24 = 0;
        FUN_101c4c66(iVar2);
      }
      else {
        iVar2 = *(int *)(iVar2 + 0x20);
        uVar6 = 0;
        puVar3 = local_24;
        local_1c = param_1;
        do {
          iVar4 = (*param_4)((int)*(char *)(iVar2 + uVar6));
          if (iVar4 != 0) {
            *puVar3 = *(undefined1 *)(iVar2 + uVar6);
            puVar3 = puVar3 + 1;
          }
          uVar6 = uVar6 + 1;
        } while (uVar1 != uVar6);
        *puVar3 = 0;
        FUN_101c4c66(local_20);
        puVar5 = local_24;
        param_1 = local_1c;
        if (puVar3 != local_24) goto LAB_1021a742;
      }
    }
    FUN_101c0017(param_1,local_24);
    *(undefined4 *)(param_3 + 0xc) = 0;
    *(undefined2 *)(param_3 + 8) = 0;
    FUN_101c0017(param_1,*(undefined4 *)(param_3 + 0x10));
    *(undefined4 *)(param_3 + 0x10) = 0;
    puVar5 = (undefined1 *)0x0;
  }
LAB_1021a742:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return puVar5;
}

