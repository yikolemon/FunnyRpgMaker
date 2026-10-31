/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004dca8 */

int FUN_14004dca8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 (*pauVar4) [32];
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_138 [40];
  int local_110;
  undefined1 local_10c [196];
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_138;
  local_110 = 0;
  puVar3 = (undefined8 *)FUN_140050ea0(param_1);
  iVar5 = 0;
  if (puVar3 == (undefined8 *)0x0) goto LAB_14004dd92;
  lVar1 = *(longlong *)(*param_1 + 0x98);
  lVar2 = *(longlong *)(*param_1 + 0x3e0);
  pauVar4 = FUN_14001c423(lVar1,0x808,&local_110);
  if (local_110 == 0) {
    FUN_140050ef3(lVar2 + 0x5e0,(undefined1 (*) [32])local_10c);
    local_110 = (*(code *)*puVar3)(lVar1,(undefined1 (*) [32])local_10c,pauVar4);
    if (local_110 != 0) goto LAB_14004dd43;
    lVar7 = (ulonglong)*(uint *)(lVar2 + 0x8a8) << 3;
    do {
      if (lVar7 == 0) {
        *(undefined1 (**) [32])param_1[7] = pauVar4;
        *(undefined4 *)(param_1 + 8) = 0xffffffff;
        iVar5 = 0;
        goto LAB_14004dd92;
      }
      FUN_140050ef3(*(longlong *)(lVar2 + 0x8a8 + lVar7),(undefined1 (*) [32])local_10c);
      local_110 = (*(code *)*puVar3)(lVar1,(undefined1 (*) [32])local_10c,*pauVar4 + lVar7);
      lVar7 = lVar7 + -8;
    } while (local_110 == 0);
LAB_14004dd48:
    for (uVar6 = (ulonglong)*(uint *)(lVar2 + 0x8a8); uVar6 != 0; uVar6 = uVar6 - 1) {
      FUN_14001c53d(lVar1,*(longlong *)(*pauVar4 + uVar6 * 8));
      *(undefined8 *)(*pauVar4 + uVar6 * 8) = 0;
    }
    FUN_14001c53d(lVar1,*(longlong *)*pauVar4);
    *(undefined8 *)*pauVar4 = 0;
  }
  else {
LAB_14004dd43:
    if (pauVar4 != (undefined1 (*) [32])0x0) goto LAB_14004dd48;
    pauVar4 = (undefined1 (*) [32])0x0;
  }
  FUN_14001c53d(lVar1,(longlong)pauVar4);
  iVar5 = local_110;
LAB_14004dd92:
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStack_138)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStack_138);
}

