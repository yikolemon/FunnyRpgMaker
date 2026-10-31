/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004197ee */

int * __thiscall FUN_004197ee(void *this,int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 local_20 [4];
  int *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = local_20;
  local_c = 0xffffffff;
  local_10 = &LAB_0041a190;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (*(int *)((int)this + 4) != 0xfffffff) {
    local_18 = local_20;
    FUN_0041989c(local_20,this,param_2);
    piVar2 = local_1c;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    puVar1 = *(undefined4 **)(param_1 + 4);
    *local_1c = param_1;
    local_1c[1] = (int)puVar1;
    local_1c = (int *)0x0;
    *(int **)(param_1 + 4) = piVar2;
    *puVar1 = piVar2;
    local_c = 0xffffffff;
    FUN_00419952((int)local_20);
    ExceptionList = local_14;
    return piVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f890(0x503983);
}

