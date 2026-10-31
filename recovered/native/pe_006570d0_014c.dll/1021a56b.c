/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021a56b */

undefined1 * __fastcall FUN_1021a56b(undefined4 param_1,int param_2,int param_3,code *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 *local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  local_20 = param_2;
  puVar2 = (undefined1 *)FUN_101c21f6(param_1,(*(ushort *)(param_3 + 8) >> 1) + 1,&local_18);
  iVar1 = local_20;
  puVar5 = (undefined1 *)0x0;
  if (local_18 == 0) {
    local_24 = puVar2;
    local_18 = FUN_101c461e(local_20,*(undefined4 *)(param_3 + 0xc));
    if ((local_18 == 0) &&
       (local_18 = FUN_101c4b69(iVar1,*(undefined2 *)(param_3 + 8)), local_18 == 0)) {
      uVar6 = (uint)(*(ushort *)(param_3 + 8) >> 1);
      if (uVar6 == 0) {
        *local_24 = 0;
        FUN_101c4c66(iVar1);
      }
      else {
        iVar1 = *(int *)(iVar1 + 0x20);
        uVar4 = 0;
        puVar2 = local_24;
        local_1c = param_1;
        do {
          if ((*(char *)(iVar1 + uVar4 * 2) == '\0') &&
             (iVar3 = (*param_4)((int)*(char *)(iVar1 + 1 + uVar4 * 2)), iVar3 != 0)) {
            *puVar2 = *(undefined1 *)(iVar1 + 1 + uVar4 * 2);
            puVar2 = puVar2 + 1;
          }
          uVar4 = uVar4 + 1;
        } while (uVar6 != uVar4);
        *puVar2 = 0;
        FUN_101c4c66(local_20);
        puVar5 = local_24;
        param_1 = local_1c;
        if (puVar2 != local_24) goto LAB_1021a5fb;
      }
    }
    FUN_101c0017(param_1,local_24);
    *(undefined2 *)(param_3 + 8) = 0;
    *(undefined4 *)(param_3 + 0xc) = 0;
    FUN_101c0017(param_1,*(undefined4 *)(param_3 + 0x10));
    *(undefined4 *)(param_3 + 0x10) = 0;
    puVar5 = (undefined1 *)0x0;
  }
LAB_1021a5fb:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return puVar5;
}

