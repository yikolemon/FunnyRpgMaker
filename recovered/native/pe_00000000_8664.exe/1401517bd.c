/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401517bd */

undefined8 FUN_1401517bd(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  
  lVar3 = *(longlong *)(param_1 + 0x38);
  uVar7 = 3;
  if ((lVar3 != 0) && (lVar4 = *(longlong *)(lVar3 + 0x170), lVar4 != 0)) {
    uVar7 = *(undefined8 *)(lVar4 + 0x268);
    uVar1 = *(undefined4 *)(lVar4 + 0x260);
    uVar2 = *(undefined4 *)(lVar3 + 0x168);
    cVar5 = FUN_140150d0c(lVar4 + 0x230,uVar2,uVar1,uVar7);
    if ((cVar5 != '\0') && (uVar7 = FUN_140150d4a(lVar4 + 0x230,uVar2,uVar1,uVar7), (int)uVar7 != 0)
       ) {
      return uVar7;
    }
    uVar6 = FUN_140151377(param_1,*(longlong *)(param_1 + 0x28) + -8);
    uVar7 = 3;
    if (uVar6 <= *(uint *)(param_1 + 0x30)) {
      uVar7 = FUN_140151d72(lVar4,param_1);
      *(undefined1 *)(lVar4 + 0x231) = 1;
    }
  }
  return uVar7;
}

