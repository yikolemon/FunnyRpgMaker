/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140343447 */

void FUN_140343447(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar4 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar2 + lVar4);
      FUN_140319dd7(uVar3,param_1 + 0x48,1);
      FUN_140323eca(uVar3,param_1 + 0x50,1);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}

