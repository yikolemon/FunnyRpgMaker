/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003a35e */

undefined1 (*) [32] FUN_14003a35e(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 (*pauVar3) [32];
  longlong lVar4;
  code *pcVar5;
  undefined1 auStackY_68 [32];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStackY_68;
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    pauVar3 = FUN_14001c423(lVar1,0x340,&local_2c);
    if (local_2c != 0) goto LAB_14003a40d;
    pcVar2 = *(code **)(*(longlong *)(param_1 + 8) + 0x138);
    pcVar5 = FUN_14003a43c;
    if (pcVar2 != (code *)0x0) {
      pcVar5 = pcVar2;
    }
    *(code **)(*pauVar3 + 0x18) = pcVar5;
    *(longlong *)(*pauVar3 + 0x10) = lVar1;
    *(undefined4 *)(pauVar3[0x12] + 0x14) = 0x20;
    lVar4 = FUN_14001f231(lVar1,0x18,0,0x20,0,&local_2c);
    *(longlong *)(pauVar3[0x12] + 0x18) = lVar4;
    if (local_2c == 0) goto LAB_14003a40d;
    FUN_14001c53d(lVar1,(longlong)pauVar3);
  }
  pauVar3 = (undefined1 (*) [32])0x0;
LAB_14003a40d:
  if (DAT_14012ea80 == (local_28 ^ (ulonglong)auStackY_68)) {
    return pauVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_28 ^ (ulonglong)auStackY_68);
}

