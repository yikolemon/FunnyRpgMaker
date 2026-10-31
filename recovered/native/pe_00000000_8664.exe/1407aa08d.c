/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407aa08d */

undefined8 FUN_1407aa08d(int param_1)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = 0xffffff90;
  do {
    piVar1 = (int *)(uVar3 + 0x102b9490);
    if (param_1 == *piVar1) break;
    iVar2 = (int)uVar3;
    uVar3 = (ulonglong)(iVar2 + 4);
  } while (iVar2 != 0);
  return CONCAT71((int7)(uVar3 >> 8),param_1 == *piVar1);
}

