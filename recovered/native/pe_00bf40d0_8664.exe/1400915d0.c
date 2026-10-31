/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400915d0 */

undefined8 FUN_1400915d0(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  WCHAR *pWVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 extraout_var;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 (*pauVar8) [32];
  undefined1 *puVar9;
  ulonglong uVar10;
  
  iVar5 = *(int *)(param_1 + 0x34);
  if ((iVar5 == 2) ||
     (((iVar5 != 3 && (iVar5 != 0xc)) &&
      ((*(int *)(param_1 + 0x34) == 0xd || ((*(char *)(param_1 + 0x39) + 0x9dU & 0xef) == 0)))))) {
    puVar4 = *(undefined1 **)(param_1 + 0x18);
    puVar1 = puVar4 + 8;
    puVar9 = *(undefined1 **)(param_1 + 0x458);
    if (*(undefined1 **)(param_1 + 0x458) == (undefined1 *)0x0) {
      puVar9 = (undefined1 *)(param_1 + 0x50);
    }
    *(undefined1 **)(param_1 + 0x18) = puVar1;
    uVar2 = *puVar4;
    uVar6 = CONCAT71((int7)((ulonglong)puVar1 >> 8),uVar2);
    *puVar9 = uVar2;
    *(undefined4 *)(param_1 + 0x48) = 1;
  }
  else {
    pWVar3 = *(WCHAR **)(param_1 + 0x18);
    *(WCHAR **)(param_1 + 0x18) = pWVar3 + 4;
    pauVar8 = *(undefined1 (**) [32])(param_1 + 0x458);
    if (pauVar8 == (undefined1 (*) [32])0x0) {
      pauVar8 = (undefined1 (*) [32])(param_1 + 0x50);
      uVar10 = 0x200;
    }
    else {
      uVar10 = *(ulonglong *)(param_1 + 0x450) >> 1;
    }
    iVar5 = FUN_1400a5358((int *)(param_1 + 0x48),pauVar8,uVar10,*pWVar3,*(longlong **)(param_1 + 8)
                         );
    uVar6 = CONCAT44(extraout_var,iVar5);
    if (iVar5 != 0) {
      *(undefined1 *)(param_1 + 0x38) = 1;
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x458);
  if (*(longlong *)(param_1 + 0x458) == 0) {
    lVar7 = param_1 + 0x50;
  }
  *(longlong *)(param_1 + 0x40) = lVar7;
  return CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
}

