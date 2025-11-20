from PIL import Image, ImageChops
import os
from pathlib import Path


def split_image(image_path, output_dir, slices=21):
    """
    Split an image into N horizontal slices and save them as BMP.
    """
    img = Image.open(image_path).convert("L")  # grayscale for consistency
    output_dir = Path(output_dir)
    output_dir.mkdir(parents=True, exist_ok=True)

    h = img.height
    slice_h = h // slices

    for i in range(slices):
        top = i * slice_h
        bottom = h if i == slices - 1 else (i + 1) * slice_h

        piece = img.crop((0, top, img.width, bottom))
        piece.save(output_dir / f"slice_{i+1:02d}.bmp")


def combine_with_and(input_dir, output_path):
    """
    Combine all BMP images in a directory using bitwise AND.
    """
    input_dir = Path(input_dir)
    files = sorted(input_dir.glob("*.bmp"))

    if not files:
        raise RuntimeError("No BMP files found.")

    # Load first image, convert to 1-bit
    base = Image.open(files[0]).convert("1")

    # AND all other images
    for f in files[1:]:
        img = Image.open(f).convert("1")
        if img.size != base.size:
            raise ValueError(f"Image size mismatch: {f}")
        base = ImageChops.logical_and(base, img)

    base.save(output_path)


if __name__ == "__main__":
    image_path = "gray_bits.bmp"
    split_out = "slices"
    final_out = "final.bmp"

    split_image(image_path, split_out)
    combine_with_and(split_out, final_out)