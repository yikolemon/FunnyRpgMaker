/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047fd90 */

void __thiscall FUN_0047fd90(void *this,undefined4 *param_1,int param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint local_10 [2];
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  *param_4 = param_2;
  uVar1 = *param_1;
  uVar2 = param_1[1];
  iVar3 = FUN_00481420(this,(LPSTR)local_10,L'\0',param_1,(UINT *)((int)this + 8));
  if (iVar3 < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
  }
  uVar4 = iVar3 - 1;
  if (param_3 - *param_4 < (int)uVar4) {
    *param_1 = uVar1;
    param_1[1] = uVar2;
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
  }
  if (0 < (int)uVar4) {
    FUN_004878c0((uint *)*param_4,local_10,uVar4);
    *param_4 = *param_4 + uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
}

