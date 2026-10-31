/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404aeee8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1404aeee8(uint param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_1404aa3c0(param_1);
  if (lVar2 != -1) {
    if (((param_1 == 1) && ((*(byte *)(DAT_1406328d0 + 200) & 1) != 0)) ||
       ((param_1 == 2 && ((*(byte *)(DAT_1406328d0 + 0x80) & 1) != 0)))) {
      lVar2 = FUN_1404aa3c0();
      lVar3 = FUN_1404aa3c0(1);
      if (lVar3 == lVar2) goto LAB_1404aef0a;
    }
    uVar4 = FUN_1404aa3c0(param_1);
    iVar1 = (*ram0x00014059dd60)(uVar4);
    if (iVar1 == 0) {
      iVar1 = (*_DAT_14059df60)();
      goto LAB_1404aef68;
    }
  }
LAB_1404aef0a:
  iVar1 = 0;
LAB_1404aef68:
  FUN_1404aa578(param_1);
  *(undefined1 *)
   ((&DAT_1406328d0)[(longlong)(int)param_1 >> 6] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) = 0;
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    FUN_14048fc7c(iVar1,param_2);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

