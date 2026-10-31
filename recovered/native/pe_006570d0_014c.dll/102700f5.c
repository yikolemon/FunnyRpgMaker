/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102700f5 */

undefined4 * __fastcall FUN_102700f5(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  iVar2 = FUN_1027005a(*(undefined4 *)*param_1,*(undefined4 *)param_1[1]);
  if (iVar2 != 0) {
    local_c = FUN_102743cd();
    local_14 = *(int *)(local_c + 0x4c);
    local_10 = *(undefined4 *)(local_c + 0x48);
    local_8 = 0;
    iVar3 = FUN_10282aac(&local_8,0,0,iVar2,0,&local_14);
    if (iVar3 == 0) {
      puVar4 = (undefined4 *)FUN_10274170(local_8 + 4);
      if (puVar4 != (undefined4 *)0x0) {
        iVar3 = FUN_10282aac(0,puVar4 + 1,local_8,iVar2,0xffffffff,&local_14);
        iVar2 = local_14;
        if (iVar3 == 0) {
          piVar1 = *(int **)(local_14 + 0x24 + *(int *)*param_1 * 0x10);
          if (piVar1 != (int *)0x0) {
            LOCK();
            iVar3 = *piVar1;
            *piVar1 = iVar3 + -1;
            UNLOCK();
            if (iVar3 + -1 == 0) {
              FUN_10274120(*(undefined4 *)(local_14 + 0x24 + *(int *)*param_1 * 0x10));
              *(undefined4 *)(iVar2 + 0x24 + *(int *)*param_1 * 0x10) = 0;
            }
          }
          if (((*(uint *)(local_c + 0x350) & DAT_1039bbd0) == 0) &&
             (piVar1 = *(int **)(iVar2 + 0x24 + *(int *)*param_1 * 0x10), piVar1 != (int *)0x0)) {
            LOCK();
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              FUN_10274120(*(undefined4 *)(iVar2 + 0x24 + *(int *)*param_1 * 0x10));
              *(undefined4 *)(iVar2 + 0x24 + *(int *)*param_1 * 0x10) = 0;
            }
          }
          *puVar4 = *(undefined4 *)(iVar2 + 0xc);
          *(undefined4 **)(iVar2 + 0x24 + *(int *)*param_1 * 0x10) = puVar4;
          *(undefined4 **)(iVar2 + 0x1c + *(int *)*param_1 * 0x10) = puVar4 + 1;
          return puVar4 + 1;
        }
        if ((iVar3 == 0x16) || (iVar3 == 0x22)) goto LAB_10270249;
        FUN_10274120(puVar4);
      }
    }
    else if ((iVar3 == 0x16) || (iVar3 == 0x22)) {
LAB_10270249:
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return (undefined4 *)0x0;
}

