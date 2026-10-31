/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007c921 */

undefined8 FUN_14007c921(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_98 [32];
  undefined8 **local_78 [2];
  undefined8 local_68;
  ulonglong local_60;
  undefined8 **local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar1 = param_2[1];
  lVar4 = *param_2;
  do {
    lVar3 = lVar4;
    lVar4 = lVar3;
    if (lVar3 == lVar1) break;
    FUN_14005759c(local_78,lVar3,0);
    FUN_140055d5e(param_1,local_98);
    local_58 = local_78;
    if (7 < local_60) {
      local_58 = local_78[0];
    }
    local_50 = local_68;
    iVar2 = FUN_140041fc4(local_98,&local_58);
    FUN_140005690(local_98);
    FUN_140005690(local_78);
    lVar4 = lVar3 + 0x20;
  } while (iVar2 != 0);
  return CONCAT71((int7)((ulonglong)lVar4 >> 8),lVar3 != lVar1);
}

