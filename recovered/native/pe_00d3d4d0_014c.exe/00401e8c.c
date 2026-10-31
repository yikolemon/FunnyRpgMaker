/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00401e8c */

void * __thiscall FUN_00401e8c(void *this,void *param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *local_18;
  int local_14;
  uint local_10;
  
  local_10 = DAT_0050e8c0 ^ (uint)&local_18;
  piVar1 = (int *)((int)this + 0x10);
  if (7 < *(uint *)((int)this + 0x14)) {
    this = *(void **)this;
  }
  puVar4 = (uint *)((int)this + *piVar1 * 2);
  puVar2 = (uint *)FUN_004048a5(this,puVar4);
  do {
    puVar3 = puVar4;
    puVar4 = puVar2;
    if (puVar3 == puVar2) goto LAB_00401eea;
  } while ((*(short *)((int)puVar3 + -2) != 0x5c) &&
          (puVar4 = (uint *)((int)puVar3 + -2), *(short *)((int)puVar3 + -2) != 0x2f));
  do {
    if ((*(short *)((int)puVar3 + -2) != 0x5c) &&
       (puVar4 = puVar3, *(short *)((int)puVar3 + -2) != 0x2f)) break;
    puVar3 = (uint *)((int)puVar3 + -2);
    puVar4 = puVar2;
  } while (puVar3 != puVar2);
LAB_00401eea:
  local_14 = (int)puVar4 - (int)this >> 1;
  local_18 = this;
  FUN_00404826(param_1,&local_18);
  if (DAT_0050e8c0 != (local_10 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_10 ^ (uint)&local_18);
  }
  return param_1;
}

