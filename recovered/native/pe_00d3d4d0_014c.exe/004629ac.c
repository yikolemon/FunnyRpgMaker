/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004629ac */

int * __fastcall FUN_004629ac(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_1c;
  local_1c = param_2;
  piVar1 = (int *)FUN_0041e773(param_1,0x14,&local_18);
  piVar3 = (int *)0x0;
  if (local_18 == 0) {
    *piVar1 = param_1;
    piVar1[1] = local_1c;
    iVar2 = FUN_0041efcd(param_1,8,0,param_3,0,&local_18);
    piVar1[2] = iVar2;
    if (local_18 == 0) {
      piVar1[4] = param_3;
      piVar1[3] = iVar2;
      piVar3 = piVar1;
    }
    else {
      FUN_0041c607(param_1,(int)piVar1);
      piVar3 = (int *)0x0;
    }
  }
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_1c)) {
    return piVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_1c);
}

