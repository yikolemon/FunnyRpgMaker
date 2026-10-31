/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047fbe0 */

undefined4 __thiscall
FUN_0047fbe0(void *this,undefined4 param_1,int param_2,byte *param_3,int *param_4,LPWSTR param_5,
            LPWSTR param_6,int *param_7)

{
  byte *pbVar1;
  uint uVar2;
  undefined8 local_10;
  void *local_8;
  
  *param_4 = param_2;
  local_10 = 0;
  *param_7 = (int)param_5;
  pbVar1 = (byte *)*param_4;
  local_8 = this;
  while( true ) {
    if (pbVar1 == param_3) {
      return 0;
    }
    if ((param_5 == param_6) ||
       (uVar2 = FUN_004814e0(param_5,pbVar1,(int)param_3 - (int)pbVar1,&local_10,
                             (UINT *)((int)local_8 + 8)), uVar2 == 0xfffffffe)) break;
    if (uVar2 == 0xffffffff) {
      return 2;
    }
    if (uVar2 == 0) {
      uVar2 = 1;
    }
    *param_4 = *param_4 + uVar2;
    *param_7 = *param_7 + 2;
    pbVar1 = (byte *)*param_4;
    param_5 = (LPWSTR)*param_7;
  }
  return 1;
}

