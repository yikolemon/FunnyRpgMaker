/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10149ce7 */

void __fastcall FUN_10149ce7(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_1039d74c;
  *(undefined2 *)(param_1 + 1) = 0;
  iVar1 = *(int *)(iVar2 + 0x1528);
  if (iVar1 == *param_1) {
    if ((*(byte *)(iVar2 + 0x27b4) & 0x40) != 0) {
      FUN_100f99e6("[selection] BeginBoxSelect() 0X%08X: Deactivate\n",iVar1);
    }
    FUN_101028d8();
  }
  *param_1 = 0;
  return;
}

