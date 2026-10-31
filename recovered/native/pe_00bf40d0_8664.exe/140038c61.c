/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140038c61 */

undefined8 FUN_140038c61(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *param_1;
  puVar2 = *(undefined8 **)(lVar1 + 0xa0);
  if (puVar2[4] == 0) {
    uVar4 = (*(code *)**(undefined8 **)(param_1[99] + 0x48))
                      (*puVar2,*(undefined4 *)(puVar2 + 1),1,lVar1,0);
    uVar3 = (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0x50))
                      (uVar4,*(undefined4 *)(lVar1 + 4));
    (**(code **)(*(longlong *)(param_1[99] + 0x48) + 8))(uVar4);
  }
  else {
    uVar3 = (*(code *)(*(undefined8 **)(param_1[99] + 0x48))[0xb])(FUN_140038d19,param_1,0);
  }
  (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0x68))(uVar3,*(undefined4 *)(lVar1 + 4));
  (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0x70))(uVar3,*(undefined2 *)(lVar1 + 0x68));
  return uVar3;
}

