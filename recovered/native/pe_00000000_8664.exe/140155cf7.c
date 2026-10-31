/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140155cf7 */

int FUN_140155cf7(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_14012b478(*param_1);
  if (iVar1 == 0) {
    lVar2 = FUN_1401571c4(param_1);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 8))
                (*(undefined8 *)param_1[7],*(undefined4 *)((longlong)param_1 + 0x1c),
                 *(undefined4 *)(param_1 + 4),0,0);
    }
  }
  return iVar1;
}

