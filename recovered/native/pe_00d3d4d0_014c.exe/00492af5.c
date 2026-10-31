/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00492af5 */

undefined4 * __fastcall FUN_00492af5(undefined4 *param_1)

{
  int *piVar1;
  wchar_t *pwVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_14;
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  pwVar2 = FUN_00492a5a(*(int *)*param_1,*(byte **)param_1[1]);
  if (pwVar2 != (wchar_t *)0x0) {
    local_c = FUN_004961ad();
    local_14 = *(int *)(local_c + 0x4c);
    local_10 = *(undefined4 *)(local_c + 0x48);
    local_8 = 0;
    iVar3 = FUN_004a2c6c(&local_8,(uint *)0x0,0,pwVar2,0,&local_14);
    if (iVar3 == 0) {
      puVar4 = FUN_00495f50(local_8 + 4);
      if (puVar4 != (undefined4 *)0x0) {
        iVar5 = FUN_004a2c6c((uint *)0x0,puVar4 + 1,local_8,pwVar2,0xffffffff,&local_14);
        iVar3 = local_14;
        if (iVar5 == 0) {
          piVar1 = *(int **)(local_14 + 0x24 + *(int *)*param_1 * 0x10);
          if (piVar1 != (int *)0x0) {
            LOCK();
            iVar5 = *piVar1;
            *piVar1 = iVar5 + -1;
            UNLOCK();
            if (iVar5 + -1 == 0) {
              FUN_00495f00(*(LPVOID *)(local_14 + 0x24 + *(int *)*param_1 * 0x10));
              *(undefined4 *)(iVar3 + 0x24 + *(int *)*param_1 * 0x10) = 0;
            }
          }
          if (((*(uint *)(local_c + 0x350) & DAT_0051b640) == 0) &&
             (piVar1 = *(int **)(iVar3 + 0x24 + *(int *)*param_1 * 0x10), piVar1 != (int *)0x0)) {
            LOCK();
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              FUN_00495f00(*(LPVOID *)(iVar3 + 0x24 + *(int *)*param_1 * 0x10));
              *(undefined4 *)(iVar3 + 0x24 + *(int *)*param_1 * 0x10) = 0;
            }
          }
          *puVar4 = *(undefined4 *)(iVar3 + 0xc);
          *(undefined4 **)(iVar3 + 0x24 + *(int *)*param_1 * 0x10) = puVar4;
          *(undefined4 **)(iVar3 + 0x1c + *(int *)*param_1 * 0x10) = puVar4 + 1;
          return puVar4 + 1;
        }
        if ((iVar5 == 0x16) || (iVar5 == 0x22)) goto LAB_00492c49;
        FUN_00495f00(puVar4);
      }
    }
    else if ((iVar3 == 0x16) || (iVar3 == 0x22)) {
LAB_00492c49:
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return (undefined4 *)0x0;
}

