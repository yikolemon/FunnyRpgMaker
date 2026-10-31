/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e1fa2 */

uint __fastcall FUN_100e1fa2(int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
LAB_100e1fd0:
    *param_1 = 0;
    uVar2 = (uint)*(byte *)((int)param_1 + 5);
  }
  else {
    if ((*(byte **)piVar1[7] == (byte *)0x0) || (*(int *)piVar1[0xb] < 1)) {
      uVar2 = (**(code **)(*piVar1 + 0x18))();
      if (uVar2 == 0xffffffff) goto LAB_100e1fd0;
    }
    else {
      uVar2 = (uint)**(byte **)piVar1[7];
    }
    *(char *)((int)param_1 + 5) = (char)uVar2;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  return uVar2;
}

