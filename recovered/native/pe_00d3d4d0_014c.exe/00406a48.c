/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00406a48 */

undefined4 * __thiscall FUN_00406a48(void *this,uint *param_1,uint *param_2)

{
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_00407150;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *(undefined8 *)((int)this + 0x10) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  local_14 = 0;
  local_24 = this;
  if (param_1 == param_2) {
    *(undefined4 *)((int)this + 0x14) = 7;
    *(undefined2 *)this = 0;
  }
  else {
    FUN_00404a4a(this,param_1,(int)param_2 - (int)param_1 >> 1);
  }
  ExceptionList = local_1c;
  return local_24;
}

