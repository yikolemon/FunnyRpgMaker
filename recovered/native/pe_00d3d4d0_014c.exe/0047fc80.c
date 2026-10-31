/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047fc80 */

void __thiscall
FUN_0047fc80(void *this,undefined4 *param_1,int param_2,WCHAR *param_3,int *param_4,LPSTR param_5,
            LPSTR param_6,int *param_7)

{
  WCHAR *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint local_10 [2];
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  *param_4 = param_2;
  *param_7 = (int)param_5;
  this_00 = (WCHAR *)*param_4;
  do {
    if ((this_00 == param_3) || (param_5 == param_6)) goto LAB_0047fd43;
    if ((int)param_6 - (int)param_5 < 5) {
      uVar1 = *param_1;
      uVar2 = param_1[1];
      uVar4 = FUN_00481420(this_00,(LPSTR)local_10,*this_00,param_1,(UINT *)((int)this + 8));
      if ((int)uVar4 < 0) goto LAB_0047fd6d;
      if ((int)param_6 - *param_7 < (int)uVar4) {
        *param_1 = uVar1;
        param_1[1] = uVar2;
LAB_0047fd43:
                    /* WARNING: Subroutine does not return */
        FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
      }
      FUN_004878c0((uint *)*param_7,local_10,uVar4);
      *param_4 = *param_4 + 2;
      *param_7 = *param_7 + uVar4;
    }
    else {
      iVar3 = FUN_00481420(this_00,param_5,*this_00,param_1,(UINT *)((int)this + 8));
      if (iVar3 < 0) {
LAB_0047fd6d:
                    /* WARNING: Subroutine does not return */
        FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
      }
      *param_4 = *param_4 + 2;
      *param_7 = *param_7 + iVar3;
    }
    this_00 = (WCHAR *)*param_4;
    param_5 = (LPSTR)*param_7;
  } while( true );
}

