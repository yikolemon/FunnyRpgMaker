/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004d185 */

undefined8 FUN_14004d185(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0x3e0);
  if (*(longlong *)(lVar2 + 0x4d8) == 0) {
    uVar4 = 0xa3;
  }
  else {
    pcVar3 = *(code **)(*(longlong *)(lVar2 + 0x10d8) + 8);
    if (pcVar3 == (code *)0x0) {
      uVar4 = 7;
    }
    else {
      uVar4 = (*pcVar3)(*(undefined8 *)(lVar1 + 0x98),param_1,*(undefined4 *)(lVar2 + 0x20),
                        &LAB_14004e224,0,lVar1);
    }
  }
  return uVar4;
}

