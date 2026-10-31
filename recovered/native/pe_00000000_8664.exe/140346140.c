/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140346140 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140346140(longlong param_1,longlong param_2,float param_3,int param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  float local_28 [4];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  ulonglong local_8;
  
  local_8 = ram0x000140613b10 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(param_1 + 0x418);
  local_18 = *(float *)(lVar3 + 0x60);
  fStack_14 = *(float *)(lVar3 + 100);
  fStack_10 = (float)*(undefined8 *)(lVar3 + 0x68) + *(float *)(lVar3 + 0x60);
  fStack_c = (float)((ulonglong)*(undefined8 *)(lVar3 + 0x68) >> 0x20) + *(float *)(lVar3 + 100);
  lVar3 = *(longlong *)(param_1 + 0x48);
  local_28[0] = *(float *)(lVar3 + 8);
  local_28[1] = *(float *)(lVar3 + 0xc);
  local_28[2] = (float)*(undefined8 *)(lVar3 + 0x10) + *(float *)(lVar3 + 8);
  local_28[3] = (float)((ulonglong)*(undefined8 *)(lVar3 + 0x10) >> 0x20) + *(float *)(lVar3 + 0xc);
  lVar3 = (longlong)param_4;
  fVar1 = local_28[lVar3 + 4];
  if (((fVar1 == local_28[lVar3]) && (fVar2 = *(float *)(param_2 + lVar3 * 4), fVar1 < fVar2)) &&
     (fVar2 - param_3 <= fVar1)) {
    *(float *)(param_2 + lVar3 * 4) = fVar1;
  }
  fVar1 = local_28[lVar3 + 6];
  if (((fVar1 == local_28[lVar3 + 2]) &&
      (fVar2 = *(float *)(param_2 + 8 + lVar3 * 4), fVar2 < fVar1)) && (fVar1 <= param_3 + fVar2)) {
    *(float *)(param_2 + 8 + lVar3 * 4) = fVar1;
  }
  if (ram0x000140613b10 != (local_8 ^ (ulonglong)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_14044aba0(local_8 ^ (ulonglong)auStack_48);
  }
  return;
}

