/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00480980 */

void __thiscall
FUN_00480980(void *this,int *param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6,
            int param_7)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int local_c;
  int local_8;
  
  local_c = param_4 + param_2;
  local_8 = param_5 + param_3 + (uint)CARRY4(param_4,param_2);
  if (*(int *)((int)this + 0x4c) != 0) {
    cVar2 = FUN_00480c40(this);
    if (cVar2 != '\0') {
      iVar3 = _fsetpos(*(FILE **)((int)this + 0x4c),(fpos_t *)&local_c);
      if (iVar3 == 0) {
        *(int *)((int)this + 0x40) = param_6;
        *(int *)((int)this + 0x44) = param_7;
        if (**(int **)((int)this + 0xc) == (int)this + 0x3c) {
          iVar3 = *(int *)((int)this + 0x54);
          iVar1 = *(int *)((int)this + 0x50);
          **(int **)((int)this + 0xc) = iVar1;
          **(int **)((int)this + 0x1c) = iVar1;
          **(int **)((int)this + 0x2c) = iVar3 - iVar1 >> 1;
        }
        iVar3 = *(int *)((int)this + 0x44);
        param_1[4] = *(int *)((int)this + 0x40);
        param_1[5] = iVar3;
        *param_1 = local_c;
        param_1[1] = local_8;
        param_1[2] = 0;
        param_1[3] = 0;
        return;
      }
    }
  }
  *param_1 = -1;
  param_1[1] = -1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}

