/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00467749 */

void __fastcall FUN_00467749(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1[1] == 0) {
    iVar1 = *param_1;
    iVar2 = FUN_0046777d((int)(param_1 + 4),param_2,iVar1);
    if (iVar2 == 0) {
      FUN_0046777d((int)(param_1 + 0xd),param_2,iVar1);
    }
  }
  return;
}

