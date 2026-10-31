/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10192535 */

void FUN_10192535(void)

{
  undefined4 uVar1;
  
  if ((DAT_103a323f & 3) != 0) {
    return;
  }
  uVar1 = 0x80;
  FUN_101931da(&DAT_103a3234,0,0x80,2);
  FUN_10193246(&DAT_103a3234,0,uVar1,0,&DAT_10355ea3);
  FUN_10193246(&DAT_103a3234,0,uVar1,1,".,;!?\"");
  uVar1 = 0x300f;
  FUN_101931da(&DAT_103a3254,0x3000,0x300f,2);
  FUN_10193218(&DAT_103a3254,0x3000,uVar1,0,0x3000);
  FUN_10193218(&DAT_103a3254,0x3000,uVar1,1,0x3001);
  FUN_10193218(&DAT_103a3254,0x3000,uVar1,1,0x3002);
  return;
}

