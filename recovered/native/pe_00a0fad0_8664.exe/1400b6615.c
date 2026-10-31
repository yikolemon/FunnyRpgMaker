/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b6615 */

ulonglong FUN_1400b6615(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 ***pppuVar4;
  undefined8 local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined8 **local_48 [3];
  ulonglong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_90 = param_1;
  FUN_1400b673e(local_68,&local_90,0);
  FUN_14000559c(local_68,local_88);
  FUN_14000892c(local_48,local_88);
  FUN_140005690(local_88);
  FUN_140005690();
  lVar1 = 0;
  do {
    lVar3 = lVar1;
    if (lVar3 == 0x20) break;
    pppuVar4 = local_48;
    if (7 < local_30) {
      pppuVar4 = (undefined8 ***)local_48[0];
    }
    iVar2 = FUN_1401156b0(pppuVar4,*(undefined8 *)((longlong)&PTR_DAT_140164f20 + lVar3));
    lVar1 = lVar3 + 8;
  } while (iVar2 != 0);
  FUN_140005242(local_48);
  return CONCAT71(0x140164f,lVar3 != 0x20) & 0xffffffff;
}

