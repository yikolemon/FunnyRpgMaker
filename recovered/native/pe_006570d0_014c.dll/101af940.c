/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101af940 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101af940(void)

{
  char cVar1;
  
  cVar1 = FUN_10147d77("Multi-component Widgets");
  if (cVar1 != '\0') {
    FUN_101032c6("imgui_demo.cpp",0x827,"Widgets/Multi-component Widgets");
    thunk_FUN_10130d81("ImGuiSliderFlags_ColorMarkers",&DAT_103a3ea4,0x1000);
    FUN_10132656("2-wide");
    FUN_1014193d("input float2",&DAT_1038ab18,"%.3f",0);
    FUN_10141a12("input int2",&DAT_1038ab28,0);
    FUN_10137fb6("drag float2",&DAT_1038ab18,_DAT_10302900,_UNK_10302904,_UNK_10302908,_UNK_1030290c
                 ,DAT_103a3ea4);
    FUN_10138404("drag int2",&DAT_1038ab28,_DAT_10302910,_UNK_10302914,_UNK_10302918,_UNK_1030291c,
                 DAT_103a3ea4);
    FUN_1013d2dc("slider float2",&DAT_1038ab18,0,0x3f800000,0,DAT_103a3ea4);
    FUN_1013d4f0("slider int2",&DAT_1038ab28,0,0xff,0,DAT_103a3ea4);
    FUN_10132656("3-wide");
    FUN_1014195e("input float3",&DAT_1038ab18,"%.3f",0);
    FUN_10141a34("input int3",&DAT_1038ab28,0);
    FUN_10138038("drag float3",&DAT_1038ab18,_DAT_10302900,_UNK_10302904,_UNK_10302908,_UNK_1030290c
                 ,DAT_103a3ea4);
    FUN_10138486("drag int3",&DAT_1038ab28,_DAT_10302910,_UNK_10302914,_UNK_10302918,_UNK_1030291c,
                 DAT_103a3ea4);
    FUN_1013d335("slider float3",&DAT_1038ab18,0,0x3f800000,0,DAT_103a3ea4);
    FUN_1013d549("slider int3",&DAT_1038ab28,0,0xff,0,DAT_103a3ea4);
    FUN_10132656("4-wide");
    FUN_1014197f("input float4",&DAT_1038ab18,"%.3f",0);
    FUN_10141a56("input int4",&DAT_1038ab28,0);
    FUN_101380ba("drag float4",&DAT_1038ab18,_DAT_10302900,_UNK_10302904,_UNK_10302908,_UNK_1030290c
                 ,DAT_103a3ea4);
    FUN_10138508("drag int4",&DAT_1038ab28,_DAT_10302910,_UNK_10302914,_UNK_10302918,_UNK_1030291c,
                 DAT_103a3ea4);
    FUN_1013d38e("slider float4",&DAT_1038ab18,0,0x3f800000,0,DAT_103a3ea4);
    FUN_1013d5a2("slider int4",&DAT_1038ab28,0,0xff,0,DAT_103a3ea4);
    FUN_10132656("Ranges");
    FUN_1013813c("range float",&DAT_1038ab38,&DAT_1038ab3c,0x3e800000,0,0x42c80000,"Min: %.1f %%",
                 "Max: %.1f %%",0x600);
    FUN_10138587("range int",&DAT_1038ab40,&DAT_1038ab44,0x40a00000,0,1000,"Min: %d units",
                 "Max: %d units",0);
    FUN_10138587("range int (no bounds)",&DAT_1038ab40,&DAT_1038ab44,0x40a00000,0,0,"Min: %d units",
                 "Max: %d units",0);
    FUN_10149387();
    return;
  }
  return;
}

