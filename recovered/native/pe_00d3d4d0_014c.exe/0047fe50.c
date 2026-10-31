/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047fe50 */

int __thiscall FUN_0047fe50(void *this,undefined4 param_1,byte *param_2,byte *param_3,int param_4)

{
  uint uVar1;
  byte *pbVar2;
  WCHAR local_8 [2];
  
  for (pbVar2 = param_2; (param_4 != 0 && (pbVar2 != param_3)); pbVar2 = pbVar2 + uVar1) {
    uVar1 = FUN_004814e0(local_8,pbVar2,(int)param_3 - (int)pbVar2,param_1,(UINT *)((int)this + 8));
    if ((int)uVar1 < 0) break;
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    param_4 = param_4 + -1;
  }
  return (int)pbVar2 - (int)param_2;
}

