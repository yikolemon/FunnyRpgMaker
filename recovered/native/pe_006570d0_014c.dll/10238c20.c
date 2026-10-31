/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10238c20 */

void __thiscall
FUN_10238c20(int param_1,undefined4 *param_2,int param_3,undefined2 *param_4,int *param_5,
            int param_6,int param_7,int *param_8)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_10 [8];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  *param_5 = param_3;
  *param_8 = param_6;
  puVar1 = (undefined2 *)*param_5;
  do {
    if ((puVar1 == param_4) || (param_6 == param_7)) goto LAB_10238ce3;
    if (param_7 - param_6 < 5) {
      uVar2 = *param_2;
      uVar3 = param_2[1];
      iVar4 = FUN_1022c060(local_10,*puVar1,param_2,param_1 + 8);
      if (iVar4 < 0) goto LAB_10238d0d;
      if (param_7 - *param_8 < iVar4) {
        *param_2 = uVar2;
        param_2[1] = uVar3;
LAB_10238ce3:
                    /* WARNING: Subroutine does not return */
        FUN_102283e0();
      }
      FUN_1025b2d0(*param_8,local_10,iVar4);
      *param_5 = *param_5 + 2;
      *param_8 = *param_8 + iVar4;
    }
    else {
      iVar4 = FUN_1022c060(param_6,*puVar1,param_2,param_1 + 8);
      if (iVar4 < 0) {
LAB_10238d0d:
                    /* WARNING: Subroutine does not return */
        FUN_102283e0();
      }
      *param_5 = *param_5 + 2;
      *param_8 = *param_8 + iVar4;
    }
    puVar1 = (undefined2 *)*param_5;
    param_6 = *param_8;
  } while( true );
}

