/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00409400 */

uint * __thiscall
FUN_00409400(void *this,uint *param_1,uint param_2,char ***param_3,int param_4,ushort param_5)

{
  undefined4 ****ppppuVar1;
  uint local_5c;
  char ***pppcStack_58;
  undefined1 ***local_54 [16];
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_5c;
  ppppuVar1 = (undefined4 ****)FUN_00409faa(local_54,0x40,0x5034f4);
  if ((int)ppppuVar1 < 0) {
    *param_1 = param_2;
    param_1[1] = (uint)param_3;
  }
  else {
    local_5c = param_2;
    pppcStack_58 = param_3;
    FUN_0040a014(this,param_1,param_2,param_3,param_4,param_5,(char *)local_54,ppppuVar1);
  }
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_5c)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_5c);
}

