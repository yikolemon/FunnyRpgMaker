/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041b968 */

undefined4 * __thiscall
FUN_0041b968(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            double param_5)

{
  undefined4 uVar1;
  
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = FUN_00424186(CONCAT44(param_2,param_1),(double)CONCAT44(param_4,param_3),param_5);
  FUN_0041b9a8(this,uVar1);
  return this;
}

