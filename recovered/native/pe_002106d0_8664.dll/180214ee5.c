/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180214ee5 */

undefined8 FUN_180214ee5(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  pcVar2 = *(code **)(*(longlong *)(lVar1 + 0x298) + 8);
  if (pcVar2 == (code *)0x0) {
    uVar3 = 7;
  }
  else {
    uVar3 = (*pcVar2)(*(undefined8 *)(lVar1 + 0x98),param_1,*(undefined4 *)(lVar1 + 0x240),
                      &LAB_180216945,0,lVar1);
  }
  return uVar3;
}

